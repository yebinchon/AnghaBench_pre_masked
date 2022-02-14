
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32 ;
typedef int FILE ;


 int FUNC_0 (unsigned char*,int,int,int *) ;

uint32 FUNC_1(FILE *VAR_0)
{
   unsigned char VAR_1[4];
   FUNC_0(VAR_1, 1, 4, VAR_0);
   return (VAR_1[0]<<24) + (VAR_1[1]<<16) + (VAR_1[2]<<8) + VAR_1[3];
}
