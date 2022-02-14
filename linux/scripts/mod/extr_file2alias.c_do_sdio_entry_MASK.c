
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u8 ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (char*,char*,int,scalar_t__) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(const char *VAR_5,
   void *VAR_6, char *VAR_7)
{
 FUNC_1(VAR_6, VAR_3, VAR_1);
 FUNC_1(VAR_6, VAR_3, VAR_4);
 FUNC_1(VAR_6, VAR_3, VAR_2);

 FUNC_3(VAR_7, "sdio:");
 FUNC_0(VAR_7, "c", VAR_1 != (__u8)VAR_0, VAR_1);
 FUNC_0(VAR_7, "v", VAR_4 != (__u16)VAR_0, VAR_4);
 FUNC_0(VAR_7, "d", VAR_2 != (__u16)VAR_0, VAR_2);
 FUNC_2(VAR_7);
 return 1;
}
