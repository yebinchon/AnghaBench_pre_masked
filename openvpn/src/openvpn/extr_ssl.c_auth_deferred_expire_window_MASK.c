
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_options {int handshake_window; int renegotiate_seconds; } ;



__attribute__((used)) static int
FUNC_0(const struct tls_options *VAR_0)
{
    int VAR_1 = VAR_0->handshake_window;
    const int VAR_2 = VAR_0->renegotiate_seconds / 2;

    if (VAR_0->renegotiate_seconds && VAR_2 < VAR_1)
    {
        VAR_1 = VAR_2;
    }
    return VAR_1;
}
