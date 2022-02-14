
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;



ULONG FUNC_0( ULONG VAR_0 ) {
    return
 ((VAR_0 & 0xff) << 24) |
 ((VAR_0 & 0xff00) << 8) |
 ((VAR_0 >> 8) & 0xff00) |
 ((VAR_0 >> 24) & 0xff);
}
