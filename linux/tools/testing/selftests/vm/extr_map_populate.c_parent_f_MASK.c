
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long*,int ,int ) ;
 int FUNC_4 (int,int*,int) ;
 int FUNC_5 (int,int*,int ) ;
 int FUNC_6 (int,int*,int) ;

__attribute__((used)) static int FUNC_7(int VAR_2, unsigned long *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_4(VAR_2, &VAR_5, sizeof(int));
 FUNC_0(VAR_6 <= 0, "read(sock)");

 *VAR_3 = 0x22222BAD;
 VAR_6 = FUNC_3(VAR_3, VAR_0, VAR_1);
 FUNC_0(VAR_6, "msync()");

 VAR_6 = FUNC_6(VAR_2, &VAR_5, sizeof(int));
 FUNC_0(VAR_6 <= 0, "write(sock)");

 FUNC_5(VAR_4, &VAR_5, 0);
 FUNC_0(!FUNC_2(VAR_5), "child in unexpected state");

 return FUNC_1(VAR_5);
}
