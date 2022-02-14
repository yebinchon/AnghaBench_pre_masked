
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int signature ;
typedef int STREAM ;
typedef int RD_BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (char*,int ,char*,int ,char*,int ,char*,int,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static RD_BOOL
FUNC_5(STREAM VAR_6, uint32 VAR_7, uint8 * VAR_8, uint8 * VAR_9)
{
 uint8 VAR_10[VAR_1];
 uint8 VAR_11[VAR_1];
 uint32 VAR_12;

 if (VAR_7 != 72)
 {
  return VAR_3;
 }
 FUNC_2(VAR_10, 0, sizeof(VAR_10));
 VAR_12 = VAR_7 - 8;
 FUNC_1(VAR_6, VAR_10, VAR_12);
    if(FUNC_3((char *)VAR_9, VAR_0, (char *)VAR_8, VAR_4,
                     (char *)VAR_11, VAR_2, (char *)VAR_10, VAR_12, (char *)VAR_5))
    {
        FUNC_0(("key signature doesn't match test key\n"));
    }
 return FUNC_4(VAR_6);
}
