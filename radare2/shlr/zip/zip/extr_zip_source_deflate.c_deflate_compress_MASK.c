
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zip_uint64_t ;
typedef int zip_int64_t ;
struct zip_stat {int valid; int comp_size; int comp_method; } ;
struct zip_source {int dummy; } ;
struct TYPE_3__ {int * next_out; int avail_out; int * next_in; int avail_in; int * opaque; void* zfree; void* zalloc; } ;
struct deflate {int* e; int size; int eof; TYPE_1__ zstr; int mem_level; } ;
typedef enum zip_source_cmd { ____Placeholder_zip_source_cmd } zip_source_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct zip_source*,struct deflate*,void*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct deflate*) ;
 int FUNC_4 (void*,int*,int) ;

__attribute__((used)) static zip_int64_t
FUNC_5(struct zip_source *VAR_11, void *VAR_12, void *VAR_13,
   zip_uint64_t VAR_14, enum zip_source_cmd VAR_15)
{
    struct deflate *VAR_16;
    int VAR_17;

    VAR_16 = (struct deflate *)VAR_12;

    switch (VAR_15) {
    case 130:
 VAR_16->zstr.zalloc = VAR_9;
 VAR_16->zstr.zfree = VAR_9;
 VAR_16->zstr.opaque = ((void*)0);
 VAR_16->zstr.avail_in = 0;
 VAR_16->zstr.next_in = ((void*)0);
 VAR_16->zstr.avail_out = 0;
 VAR_16->zstr.next_out = ((void*)0);


 if ((VAR_17=FUNC_2(&VAR_16->zstr, VAR_6, VAR_8,
         -VAR_0, VAR_16->mem_level,
         VAR_7)) != VAR_10) {
     VAR_16->e[0] = VAR_3;
     VAR_16->e[1] = VAR_17;
     return -1;
 }

 return 0;

    case 129:
 return FUNC_0(VAR_11, VAR_16, VAR_13, VAR_14);

    case 133:
 FUNC_1(&VAR_16->zstr);
 return 0;

    case 128:
     {
     struct zip_stat *VAR_18;

     VAR_18 = (struct zip_stat *)VAR_13;

     VAR_18->comp_method = VAR_1;
     VAR_18->valid |= VAR_4;
     if (VAR_16->eof) {
  VAR_18->comp_size = VAR_16->size;
  VAR_18->valid |= VAR_5;
     }
     else
  VAR_18->valid &= ~VAR_5;
 }
 return 0;

    case 132:
 FUNC_4(VAR_13, VAR_16->e, sizeof(int)*2);
 return sizeof(int)*2;

    case 131:
 FUNC_3(VAR_16);
 return 0;

    default:
 VAR_16->e[0] = VAR_2;
 VAR_16->e[1] = 0;
 return -1;
    }
}
