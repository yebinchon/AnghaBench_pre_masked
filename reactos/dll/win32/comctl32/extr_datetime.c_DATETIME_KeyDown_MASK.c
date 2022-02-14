
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int select; int* fieldspec; int nrFields; int hwndSelf; int nCharsEntered; int haveFocus; } ;
typedef int LRESULT ;
typedef int DWORD ;
typedef TYPE_1__ DATETIME_INFO ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_5 ;
__attribute__((used)) static LRESULT
FUNC_5 (DATETIME_INFO *VAR_6, DWORD VAR_7)
{
    int VAR_8 = VAR_6->select & VAR_0;
    int VAR_9 = 0;
    int VAR_10;

    if (!(VAR_6->haveFocus)) return 0;
    if ((VAR_8==0) && (VAR_6->select)) return 0;

    if (VAR_6->select & VAR_2) {
 FUNC_3 ("Callbacks not implemented yet\n");
    }

    switch (VAR_7) {
 case 135:
     case 128:
     VAR_6->nCharsEntered = 0;
     FUNC_0 (VAR_6, VAR_8, 1);
     FUNC_1 (VAR_6);
     break;
 case 129:
 case 134:
     VAR_6->nCharsEntered = 0;
     FUNC_0 (VAR_6, VAR_8, -1);
     FUNC_1 (VAR_6);
     break;
 case 132:
     VAR_6->nCharsEntered = 0;
     FUNC_0 (VAR_6, VAR_8, VAR_4);
     FUNC_1 (VAR_6);
     break;
 case 133:
     VAR_6->nCharsEntered = 0;
     FUNC_0 (VAR_6, VAR_8, VAR_3);
     FUNC_1 (VAR_6);
     break;
 case 131:
     VAR_10 = VAR_6->select;
     do {
  if (VAR_10 == 0) {
      VAR_10 = VAR_10 - 1;
      VAR_9++;
  } else {
      VAR_10--;
  }
     } while ((VAR_6->fieldspec[VAR_10] & VAR_1) && (VAR_9<2));
     if (VAR_10 != VAR_6->select)
         FUNC_2(VAR_6, VAR_10);
     break;
 case 130:
     VAR_10 = VAR_6->select;
     do {
  VAR_10++;
  if (VAR_10==VAR_6->nrFields) {
      VAR_10 = 0;
      VAR_9++;
  }
     } while ((VAR_6->fieldspec[VAR_10] & VAR_1) && (VAR_9<2));
     if (VAR_10 != VAR_6->select)
         FUNC_2(VAR_6, VAR_10);
     break;
    }

    FUNC_4(VAR_6->hwndSelf, ((void*)0), VAR_5);

    return 0;
}
