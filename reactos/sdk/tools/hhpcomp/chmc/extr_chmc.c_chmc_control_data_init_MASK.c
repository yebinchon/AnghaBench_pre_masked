
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcLzxcControlData {int size; int version; int resetInterval; int windowSize; int windowsPerReset; scalar_t__ unknown_18; int signature; } ;


 int FUNC_0 (int ,char*,int) ;

void FUNC_1(struct chmcLzxcControlData *VAR_0)
{
 VAR_0->size = 6;
 FUNC_0(VAR_0->signature, "LZXC", 4);
 VAR_0->version = 2;
 VAR_0->resetInterval = 2;
 VAR_0->windowSize = 2;
 VAR_0->windowsPerReset = 1;
 VAR_0->unknown_18 = 0;
}
