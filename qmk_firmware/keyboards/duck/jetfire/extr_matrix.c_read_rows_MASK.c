
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint8_t FUNC_0(uint8_t VAR_3)
{
  if(VAR_3 == 15) {
    return (VAR_2&(1<<2) ? 0 : (1<<0)) |
           (VAR_1&(1<<0) ? (1<<1) : 0) |
           (VAR_1&(1<<1) ? (1<<2) : 0) |
           (VAR_1&(1<<2) ? (1<<3) : 0) |
           (VAR_1&(1<<3) ? (1<<4) : 0) |
           (VAR_1&(1<<5) ? (1<<5) : 0);

  } else {
    return (VAR_0&(1<<7) ? (1<<0) : 0) |
           (VAR_1&(1<<0) ? (1<<1) : 0) |
           (VAR_1&(1<<1) ? (1<<2) : 0) |
           (VAR_1&(1<<2) ? (1<<3) : 0) |
           (VAR_1&(1<<3) ? (1<<4) : 0) |
           (VAR_1&(1<<5) ? (1<<5) : 0);

  }
}
