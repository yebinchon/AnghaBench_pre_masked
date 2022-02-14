
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*,int) ;

void
FUNC_2(const char *VAR_0,
                           const char *VAR_1,
                           const char *VAR_2)
{
    FUNC_0("Available TLS Ciphers, listed in order of preference:\n");





    (void) VAR_1;


    FUNC_0("\nFor TLS 1.2 and older (--tls-cipher):\n\n");
    FUNC_1(VAR_0, VAR_2, 0);

    FUNC_0("\n"
           "Be aware that that whether a cipher suite in this list can actually work\n"
           "depends on the specific setup of both peers. See the man page entries of\n"
           "--tls-cipher and --show-tls for more details.\n\n"
           );
}
