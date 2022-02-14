
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct tls_session {scalar_t__ common_name_hashval; int * common_name; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const*,scalar_t__ const,int ) ;
 int * FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(struct tls_session *VAR_0, const char *VAR_1)
{
    if (VAR_0->common_name)
    {
        FUNC_0(VAR_0->common_name);
        VAR_0->common_name = ((void*)0);



    }
    if (VAR_1)
    {

        VAR_0->common_name = FUNC_2(VAR_1, ((void*)0));
    }
}
