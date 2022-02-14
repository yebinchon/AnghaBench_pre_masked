
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int TrustStatus; } ;
struct TYPE_5__ {TYPE_1__ context; } ;
typedef int DWORD ;
typedef TYPE_2__ CertificateChain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static DWORD FUNC_1(const CertificateChain *VAR_12)
{
    DWORD VAR_13 = VAR_8;

    if (FUNC_0(&VAR_12->context.TrustStatus,
     VAR_5))
        VAR_13 &= ~VAR_11;
    if (FUNC_0(&VAR_12->context.TrustStatus,
     VAR_0))
        VAR_13 &= ~VAR_6;
    if (FUNC_0(&VAR_12->context.TrustStatus,
     VAR_4))
        VAR_13 &= ~VAR_7;
    if (FUNC_0(&VAR_12->context.TrustStatus,
     VAR_3 | VAR_2))
        VAR_13 &= ~VAR_10;
    if (FUNC_0(&VAR_12->context.TrustStatus,
     VAR_1))
        VAR_13 &= ~VAR_9;
    return VAR_13;
}
