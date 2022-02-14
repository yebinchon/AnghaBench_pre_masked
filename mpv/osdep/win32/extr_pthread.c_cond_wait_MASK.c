
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int srw; int cs; } ;
struct TYPE_5__ {TYPE_1__ lock; scalar_t__ use_cs; } ;
typedef TYPE_2__ pthread_mutex_t ;
typedef int pthread_cond_t ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(pthread_cond_t *restrict VAR_1,
                     pthread_mutex_t *restrict VAR_2,
                     DWORD VAR_3)
{
    BOOL VAR_4;
    if (VAR_2->use_cs) {
        VAR_4 = FUNC_0(VAR_1, &VAR_2->lock.cs, VAR_3);
    } else {
        VAR_4 = FUNC_1(VAR_1, &VAR_2->lock.srw, VAR_3, 0);
    }
    return VAR_4 ? 0 : VAR_0;
}
