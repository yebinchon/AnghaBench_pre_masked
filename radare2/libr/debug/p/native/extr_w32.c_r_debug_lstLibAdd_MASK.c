
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Name; int Path; int BaseOfDll; scalar_t__ hFile; int pid; } ;
typedef TYPE_1__* PLIB_ITEM ;
typedef int LPVOID ;
typedef int LIB_ITEM ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(DWORD VAR_6,LPVOID VAR_7, HANDLE VAR_8,char * VAR_9) {
 int VAR_10;
 if (VAR_4 == 0)
  VAR_4 = FUNC_0 (0, VAR_3 * sizeof (LIB_ITEM), VAR_1, VAR_2);
 VAR_5 = (PLIB_ITEM)VAR_4;
 for (VAR_10=0; VAR_10<VAR_3; VAR_10++) {
  if (!VAR_5->hFile) {
   VAR_5->pid = VAR_6;
   VAR_5->hFile = VAR_8;
   VAR_5->BaseOfDll = VAR_7;
   FUNC_3 (VAR_5->Path,VAR_9,VAR_0-1);
   int VAR_11 = FUNC_2 (VAR_9);
                        int VAR_12 = VAR_11;
                        while(VAR_9[VAR_11] != '\\' && VAR_11 >= 0) {
                             VAR_11--;
                        }
                        FUNC_3 (VAR_5->Name, &VAR_9[VAR_11+1], VAR_12-VAR_11);
   return;
  }
  VAR_5++;
 }
 FUNC_1("r_debug_lstLibAdd: Cannot find slot\n");
}
