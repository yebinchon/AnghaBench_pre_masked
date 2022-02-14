
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ dib_raw_t ;
struct TYPE_2__ {int key; } ;
typedef int HashmapBase ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (int *,int ) ;

__attribute__((used)) static unsigned FUNC_4(HashmapBase *VAR_3, unsigned VAR_4, dib_raw_t VAR_5) {
        unsigned VAR_6;

        if (VAR_5 == VAR_1)
                return VAR_0;

        if (FUNC_0(VAR_5 < VAR_2))
                return VAR_5;
        VAR_6 = FUNC_3(VAR_3, FUNC_1(VAR_3, VAR_4)->key);
        return FUNC_2(VAR_3, VAR_4, VAR_6);
}
