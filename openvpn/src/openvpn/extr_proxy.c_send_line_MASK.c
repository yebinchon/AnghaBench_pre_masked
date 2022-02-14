
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const ssize_t ;
typedef int socket_descriptor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,char const*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static bool
FUNC_3(socket_descriptor_t VAR_3,
          const char *VAR_4)
{
    const ssize_t VAR_5 = FUNC_1(VAR_3, VAR_4, FUNC_2(VAR_4), VAR_1);
    if (VAR_5 != (ssize_t) FUNC_2(VAR_4))
    {
        FUNC_0(VAR_0 | VAR_2, "send_line: TCP port write failed on send()");
        return 0;
    }
    return 1;
}
