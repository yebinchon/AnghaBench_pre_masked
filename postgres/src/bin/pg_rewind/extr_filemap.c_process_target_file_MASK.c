
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int localpath ;
struct TYPE_9__ {scalar_t__ nlist; TYPE_3__* last; TYPE_3__* first; int narray; int * array; } ;
typedef TYPE_2__ filemap_t ;
typedef scalar_t__ file_type_t ;
struct TYPE_8__ {scalar_t__ bitmapsize; int * bitmap; } ;
struct TYPE_10__ {char* path; size_t oldsize; char* link_target; struct TYPE_10__* next; int isrelfile; TYPE_1__ pagemap; scalar_t__ newsize; int action; scalar_t__ type; } ;
typedef TYPE_3__ file_entry_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (TYPE_3__**,int *,int ,int,int ) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int VAR_8 ;
 int FUNC_5 (char*,...) ;
 TYPE_3__* FUNC_6 (int) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (int *,int ,int,int ) ;
 int FUNC_9 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

void
FUNC_11(const char *VAR_9, file_type_t VAR_10, size_t VAR_11,
     const char *VAR_12)
{
 bool VAR_13;
 char VAR_14[VAR_4];
 struct stat VAR_15;
 file_entry_t VAR_16;
 file_entry_t *VAR_17;
 filemap_t *VAR_18 = VAR_7;
 file_entry_t *VAR_19;







 FUNC_9(VAR_14, sizeof(VAR_14), "%s/%s", VAR_5, VAR_9);
 if (FUNC_4(VAR_14, &VAR_15) < 0)
 {
  if (VAR_6 != VAR_0)
   FUNC_5("could not stat file \"%s\": %m",
      VAR_14);

  VAR_13 = 0;
 }

 if (VAR_18->array == ((void*)0))
 {

  if (VAR_18->nlist == 0)
  {

   FUNC_5("source file list is empty");
  }

  FUNC_2(VAR_18);

  FUNC_0(VAR_18->array != ((void*)0));

  FUNC_8(VAR_18->array, VAR_18->narray, sizeof(file_entry_t *), VAR_8);
 }




 if (FUNC_10(VAR_9, "pg_wal") == 0 && VAR_10 == VAR_3)
  VAR_10 = VAR_2;

 VAR_16.path = (char *) VAR_9;
 VAR_17 = &VAR_16;
 VAR_13 = (FUNC_1(&VAR_17, VAR_18->array, VAR_18->narray, sizeof(file_entry_t *),
       VAR_8) != ((void*)0));


 if (!VAR_13)
 {
  VAR_19 = FUNC_6(sizeof(file_entry_t));
  VAR_19->path = FUNC_7(VAR_9);
  VAR_19->type = VAR_10;
  VAR_19->action = VAR_1;
  VAR_19->oldsize = VAR_11;
  VAR_19->newsize = 0;
  VAR_19->link_target = VAR_12 ? FUNC_7(VAR_12) : ((void*)0);
  VAR_19->next = ((void*)0);
  VAR_19->pagemap.bitmap = ((void*)0);
  VAR_19->pagemap.bitmapsize = 0;
  VAR_19->isrelfile = FUNC_3(VAR_9);

  if (VAR_18->last == ((void*)0))
   VAR_18->first = VAR_19;
  else
   VAR_18->last->next = VAR_19;
  VAR_18->last = VAR_19;
  VAR_18->nlist++;
 }
 else
 {




 }
}
