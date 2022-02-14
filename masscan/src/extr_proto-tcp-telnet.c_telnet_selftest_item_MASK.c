
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
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct Banner1*,int ,struct ProtocolState*,unsigned char const*,int ,struct BannerOutput*,struct InteractiveData*) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_1, const char *VAR_2)
{
    struct Banner1 *VAR_3;
    struct ProtocolState VAR_4[1];
    struct BannerOutput VAR_5[1];
    struct InteractiveData VAR_6;
    int VAR_7;




    VAR_3 = FUNC_0();
    FUNC_2(VAR_5);
    FUNC_5(&VAR_4[0], 0, sizeof(VAR_4[0]));




    FUNC_8(VAR_3,
                 0,
                 VAR_4,
                 (const unsigned char *)VAR_1,
                 FUNC_7(VAR_1),
                 VAR_5,
                 &VAR_6
                 );





    VAR_7 = FUNC_3(VAR_5, VAR_0, VAR_2);
    if (VAR_7 == 0)
        FUNC_6("telnet parser failure: %s\n", VAR_2);
    FUNC_1(VAR_3);
    FUNC_4(VAR_5);

    return (VAR_7==0)?1:0;
}
