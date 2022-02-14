
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;


 int VAR_0 ;

inline usec_t FUNC_0(struct timeval *VAR_1) {
    return (usec_t)VAR_1->tv_sec * VAR_0 + (VAR_1->tv_usec % VAR_0);
}
