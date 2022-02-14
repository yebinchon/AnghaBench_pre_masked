
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* free ) (struct SCV_NB10_HEADER*) ;} ;
typedef TYPE_1__ SCV_NB10_HEADER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(SCV_NB10_HEADER* VAR_1) {
 FUNC_0 (VAR_1, 0, sizeof (SCV_NB10_HEADER));
 VAR_1->free = (void (*)(struct SCV_NB10_HEADER*))VAR_0;
}
