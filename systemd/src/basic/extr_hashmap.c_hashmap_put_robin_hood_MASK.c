
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct swap_entries {int dummy; } ;
typedef scalar_t__ dib_raw_t ;
struct TYPE_11__ {unsigned int idx_lowest_entry; } ;
struct TYPE_10__ {int put_count; } ;
struct TYPE_12__ {TYPE_2__ indirect; scalar_t__ has_indirect; TYPE_1__ debug; } ;
typedef TYPE_3__ HashmapBase ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__) ;
 unsigned int FUNC_1 (TYPE_3__*,unsigned int,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,struct swap_entries*,unsigned int,unsigned int) ;
 int FUNC_3 (TYPE_3__*,unsigned int,unsigned int) ;
 scalar_t__* FUNC_4 (TYPE_3__*) ;
 unsigned int FUNC_5 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static bool FUNC_6(HashmapBase *VAR_4, unsigned VAR_5,
                                   struct swap_entries *VAR_6) {
        dib_raw_t VAR_7, *VAR_8;
        unsigned VAR_9, VAR_10;





        VAR_8 = FUNC_4(VAR_4);

        for (VAR_10 = 0; ; VAR_10++) {
                VAR_7 = VAR_8[VAR_5];
                if (FUNC_0(VAR_7, VAR_0, VAR_1)) {
                        if (VAR_7 == VAR_1)
                                FUNC_2(VAR_4, VAR_6, VAR_5, VAR_3);

                        if (VAR_4->has_indirect && VAR_4->indirect.idx_lowest_entry > VAR_5)
                                VAR_4->indirect.idx_lowest_entry = VAR_5;

                        FUNC_3(VAR_4, VAR_5, VAR_10);
                        FUNC_2(VAR_4, VAR_6, VAR_2, VAR_5);
                        if (VAR_7 == VAR_1) {
                                FUNC_2(VAR_4, VAR_6, VAR_3, VAR_2);
                                return 1;
                        }

                        return 0;
                }

                VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_7);

                if (VAR_9 < VAR_10) {

                        FUNC_3(VAR_4, VAR_5, VAR_10);


                        FUNC_2(VAR_4, VAR_6, VAR_5, VAR_3);
                        FUNC_2(VAR_4, VAR_6, VAR_2, VAR_5);
                        FUNC_2(VAR_4, VAR_6, VAR_3, VAR_2);

                        VAR_10 = VAR_9;
                }

                VAR_5 = FUNC_5(VAR_4, VAR_5);
        }
}
