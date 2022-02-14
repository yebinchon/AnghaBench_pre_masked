
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ProtocolState {int dummy; } ;
struct InteractiveData {int dummy; } ;
struct BannerOutput {int dummy; } ;
struct Banner1 {int dummy; } ;
typedef int pstate ;


 int VAR_0 ;
 struct Banner1* FUNC_0 () ;
 int FUNC_1 (struct Banner1*) ;
 int FUNC_2 (struct BannerOutput*) ;
 int FUNC_3 (struct BannerOutput*,int ,char const*) ;
 int FUNC_4 (struct BannerOutput*) ;
 int FUNC_5 (struct ProtocolState*,int ,int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (struct Banner1*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_1, size_t VAR_2, const char *VAR_3)
{
    struct Banner1 *VAR_4;
    struct ProtocolState VAR_5[1];
    struct BannerOutput VAR_6[1];
    struct InteractiveData VAR_7;
    int VAR_8;




    VAR_4 = FUNC_0();
    FUNC_2(VAR_6);
    FUNC_5(&VAR_5[0], 0, sizeof(VAR_5[0]));




    FUNC_7(VAR_4,
              0,
              VAR_5,
              (const unsigned char *)VAR_1,
              VAR_2,
              VAR_6,
              &VAR_7
              );





    VAR_8 = FUNC_3(VAR_6, VAR_0, VAR_3);
    if (VAR_8 == 0)
        FUNC_6("RDP parser failure: %s\n", VAR_3);

    FUNC_1(VAR_4);
    FUNC_4(VAR_6);

    return (VAR_8?0:1);
}
