
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_21__ {int length; } ;
struct TYPE_16__ {char* string; } ;
struct TYPE_17__ {TYPE_2__ str_struct; } ;
struct TYPE_20__ {scalar_t__ name; TYPE_3__ encoding; } ;
struct TYPE_19__ {size_t length; size_t capacity; TYPE_10__* dies; TYPE_9__ hdr; } ;
struct TYPE_18__ {int length; int capacity; TYPE_1__* decls; } ;
struct TYPE_15__ {size_t length; size_t capacity; int * specs; int tag; } ;
struct TYPE_14__ {int abbrev_code; size_t length; size_t capacity; TYPE_8__* attr_values; int tag; } ;
typedef int Sdb ;
typedef TYPE_4__ RBinDwarfDebugAbbrev ;
typedef TYPE_5__ RBinDwarfCompUnit ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_8__*,int ,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (TYPE_10__*) ;
 int * FUNC_5 (int const*,int,int *,TYPE_8__*,TYPE_9__*,int const*,size_t) ;
 int * FUNC_6 (int const*,int,int*) ;
 int FUNC_7 (int *,char*,char const*,int ) ;

__attribute__((used)) static const ut8 *FUNC_8(Sdb *VAR_1, const ut8 *VAR_2,
  RBinDwarfCompUnit *VAR_3, const RBinDwarfDebugAbbrev *VAR_4,
  size_t VAR_5, const ut8 *VAR_6, size_t VAR_7) {
 const ut8 *VAR_8 = VAR_2, *VAR_9 = VAR_2 + (VAR_3->hdr.length - 7);
 ut64 VAR_10;
 size_t VAR_11;

 if (VAR_3->hdr.length > VAR_7) {

  return ((void*)0);
 }
 while (VAR_8 && VAR_8 < VAR_9 && VAR_8 >= VAR_2) {
  if (VAR_3->length && VAR_3->capacity == VAR_3->length) {
   FUNC_2 (VAR_3);
  }
  VAR_8 = FUNC_6 (VAR_8, VAR_9 - VAR_8, &VAR_10);
  if (VAR_10 > VAR_4->length || !VAR_8) {
   return ((void*)0);
  }

  FUNC_4 (&VAR_3->dies[VAR_3->length]);
  if (!VAR_10) {
   VAR_3->dies[VAR_3->length].abbrev_code = 0;
   VAR_3->length++;
   VAR_8++;
   continue;
  }

  VAR_3->dies[VAR_3->length].abbrev_code = VAR_10;
  VAR_3->dies[VAR_3->length].tag = VAR_4->decls[VAR_10 - 1].tag;
  VAR_10 += VAR_5;

  if (VAR_4->capacity < VAR_10) {
   return ((void*)0);
  }

  for (VAR_11 = 0; VAR_11 < VAR_4->decls[VAR_10 - 1].length; VAR_11++) {
   if (VAR_3->dies[VAR_3->length].length == VAR_3->dies[VAR_3->length].capacity) {
    FUNC_3 (&VAR_3->dies[VAR_3->length]);
   }
   if (VAR_11 >= VAR_3->dies[VAR_3->length].capacity || VAR_11 >= VAR_4->decls[VAR_10 - 1].capacity) {
    FUNC_0 ("Warning: malformed dwarf attribute capacity doesn't match length\n");
    break;
   }
   FUNC_1 (&VAR_3->dies[VAR_3->length].attr_values[VAR_11], 0, sizeof (VAR_3->dies[VAR_3->length].attr_values[VAR_11]));
   VAR_8 = FUNC_5 (VAR_8, VAR_9 - VAR_8,
     &VAR_4->decls[VAR_10 - 1].specs[VAR_11],
     &VAR_3->dies[VAR_3->length].attr_values[VAR_11],
     &VAR_3->hdr, VAR_6, VAR_7);
   if (VAR_3->dies[VAR_3->length].attr_values[VAR_11].name == VAR_0) {
    const char *VAR_12 = VAR_3->dies[VAR_3->length].attr_values[VAR_11].encoding.str_struct.string;
    if ((size_t)VAR_12 > 1024) {
     FUNC_7 (VAR_1, "DW_AT_comp_dir", VAR_12, 0);
    } else {
     FUNC_0 ("Invalid string pointer at %p\n", VAR_12);
    }
   }
   VAR_3->dies[VAR_3->length].length++;
  }
  VAR_3->length++;
 }
 return VAR_8;
}
