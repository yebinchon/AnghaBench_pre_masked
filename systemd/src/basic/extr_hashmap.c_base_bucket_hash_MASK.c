
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct siphash {int dummy; } ;
struct TYPE_7__ {TYPE_1__* hash_ops; } ;
struct TYPE_6__ {int (* hash ) (void const*,struct siphash*) ;} ;
typedef TYPE_2__ HashmapBase ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct siphash*) ;
 int FUNC_3 (struct siphash*,int ) ;
 int FUNC_4 (void const*,struct siphash*) ;

__attribute__((used)) static unsigned FUNC_5(HashmapBase *VAR_0, const void *VAR_1) {
        struct siphash VAR_2;
        uint64_t VAR_3;

        FUNC_3(&VAR_2, FUNC_0(VAR_0));

        VAR_0->hash_ops->hash(VAR_1, &VAR_2);

        VAR_3 = FUNC_2(&VAR_2);

        return (unsigned) (VAR_3 % FUNC_1(VAR_0));
}
