
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nrFields; int* fieldspec; char* textbuf; int nrFieldsAllocated; scalar_t__* buflen; } ;
typedef char* LPCWSTR ;
typedef TYPE_1__ DATETIME_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 char* VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (DATETIME_INFO *VAR_4, LPCWSTR VAR_5)
{
    unsigned int VAR_6;
    int VAR_7, VAR_8, VAR_9;
    BOOL VAR_10 = VAR_1;
    int *VAR_11 = &VAR_4->nrFields;

    *VAR_11 = 0;
    VAR_4->fieldspec[*VAR_11] = 0;
    VAR_9 = FUNC_2(VAR_2);
    VAR_8 = 0;

    for (VAR_6 = 0; VAR_5[VAR_6]; VAR_6++) {
 FUNC_1 ("\n%d %c:", VAR_6, VAR_5[VAR_6]);
 if (!VAR_10) {
     for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
         if (VAR_2[VAR_7]==VAR_5[VAR_6]) {
                    FUNC_1 ("%c[%d,%x]", VAR_2[VAR_7], *VAR_11, VAR_4->fieldspec[*VAR_11]);
                    if ((*VAR_11==0) && (VAR_4->fieldspec[*VAR_11]==0)) {
                        VAR_4->fieldspec[*VAR_11] = (VAR_7<<4) + 1;
                        break;
                    }
                    if (VAR_4->fieldspec[*VAR_11] >> 4 != VAR_7) {
                        (*VAR_11)++;
                        VAR_4->fieldspec[*VAR_11] = (VAR_7<<4) + 1;
                        break;
                    }
                    if ((VAR_4->fieldspec[*VAR_11] & 0x0f) == VAR_3[VAR_7]) {
                        (*VAR_11)++;
                        VAR_4->fieldspec[*VAR_11] = (VAR_7<<4) + 1;
                        break;
      }
                    VAR_4->fieldspec[*VAR_11]++;
                    break;
                }
            }
        }
        else
            VAR_7 = VAR_9;

        if (VAR_5[VAR_6] == '\'')
        {
            VAR_10 = !VAR_10;
            continue;
        }


 if (VAR_7 == VAR_9) {
     if ((*VAR_11==0) && (VAR_4->fieldspec[*VAR_11]==0)) {
  VAR_4->fieldspec[*VAR_11] = VAR_0 + VAR_8;
  VAR_4->buflen[*VAR_11] = 0;
            } else if ((VAR_4->fieldspec[*VAR_11] & VAR_0) != VAR_0) {
  (*VAR_11)++;
  VAR_4->fieldspec[*VAR_11] = VAR_0 + VAR_8;
  VAR_4->buflen[*VAR_11] = 0;
     }
     VAR_4->textbuf[VAR_8] = VAR_5[VAR_6];
     VAR_8++;
     VAR_4->buflen[*VAR_11]++;
 }

 if (*VAR_11 == VAR_4->nrFieldsAllocated) {
     FUNC_0 ("out of memory; should reallocate. crash ahead.\n");
 }
    }

    FUNC_1("\n");

    if (VAR_4->fieldspec[*VAR_11] != 0) (*VAR_11)++;
}
