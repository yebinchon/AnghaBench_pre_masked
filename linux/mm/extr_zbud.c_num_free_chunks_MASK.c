
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zbud_header {int first_chunks; int last_chunks; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct zbud_header *VAR_1)
{




 return VAR_0 - VAR_1->first_chunks - VAR_1->last_chunks;
}
