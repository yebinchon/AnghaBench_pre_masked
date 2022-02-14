
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tag_id; char* name; struct TYPE_4__* next; int filename; } ;
typedef TYPE_1__* PAPI_INFO ;
typedef int API_INFO ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int ) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(char *VAR_2, char *VAR_3, char *VAR_4)
{
  PAPI_INFO VAR_5;
  char VAR_6[200];
  char VAR_7[200];
  int VAR_8;

  FUNC_5(VAR_2);

  VAR_6[0] = 0;
  do
    {
      VAR_8 = FUNC_8();
      if (VAR_8 == VAR_0)
        {
          break;
        }


      FUNC_6();

      if (FUNC_7(VAR_7))
        {
          if (FUNC_10(VAR_7) == 0)
            {
              FUNC_4("Warning: empty function name in file %s. Previous function name was %s.\n",
                VAR_2, VAR_6);
            }
          VAR_5 = FUNC_3(sizeof(API_INFO));
          if (VAR_5 == ((void*)0))
            {
              FUNC_4("Out of memory\n");
              FUNC_1(1);
            }

          VAR_5->tag_id = VAR_8;
          FUNC_9(VAR_5->name, VAR_7);

          FUNC_2(VAR_3, VAR_4, VAR_5->filename);

          VAR_5->next = VAR_1;
          VAR_1 = VAR_5;
          FUNC_9(VAR_6, VAR_7);
        }
    } while (1);

  FUNC_0();
}
