
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cb; int lpTitle; int lpDesktop; } ;
struct TYPE_7__ {void* lpTitle; void* lpDesktop; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef int LPVOID ;
typedef TYPE_2__* LPSTARTUPINFOA ;
typedef int LPSECURITY_ATTRIBUTES ;
typedef int LPPROCESS_INFORMATION ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __inline BOOL FUNC_8(const char* VAR_6, const char* VAR_7, LPSECURITY_ATTRIBUTES VAR_8,
         LPSECURITY_ATTRIBUTES VAR_9, BOOL VAR_10, DWORD VAR_11,
         LPVOID VAR_12, const char* VAR_13, LPSTARTUPINFOA VAR_14,
         LPPROCESS_INFORMATION VAR_15)
{
 BOOL VAR_16 = VAR_2;
 DWORD VAR_17 = VAR_1;
 STARTUPINFOW VAR_18;
 FUNC_6(VAR_6);
 FUNC_6(VAR_7);
 FUNC_6(VAR_13);



 if (VAR_14->cb != sizeof(STARTUPINFOW)) {
  VAR_17 = VAR_0; goto out;
 }
 FUNC_3(&VAR_18, VAR_14, VAR_14->cb);
 VAR_18.lpDesktop = FUNC_5(VAR_14->lpDesktop);
 VAR_18.lpTitle = FUNC_5(VAR_14->lpTitle);
 VAR_16 = FUNC_0(VAR_3, VAR_4, VAR_8, VAR_9, VAR_10,
  VAR_11, VAR_12, VAR_5, &VAR_18, VAR_15);
 VAR_17 = FUNC_1();
 FUNC_4(VAR_18.lpDesktop);
 FUNC_4(VAR_18.lpTitle);
out:
 FUNC_7(VAR_6);
 FUNC_7(VAR_7);
 FUNC_7(VAR_13);
 FUNC_2(VAR_17);
 return VAR_16;
}
