
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fps_counter {int nr_rendered; int nr_skipped; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,...) ;

__attribute__((used)) static void
FUNC_1(struct fps_counter *VAR_1) {
    unsigned VAR_2 =
        VAR_1->nr_rendered * 1000 / VAR_0;
    if (VAR_1->nr_skipped) {
        FUNC_0("%u fps (+%u frames skipped)", VAR_2,
                                            VAR_1->nr_skipped);
    } else {
        FUNC_0("%u fps", VAR_2);
    }
}
