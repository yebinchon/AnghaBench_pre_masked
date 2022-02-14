
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bloomLength; int * bitSize; } ;
typedef TYPE_1__ BloomOptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static BloomOptions *
FUNC_2(void)
{
 BloomOptions *VAR_4;
 int VAR_5;

 VAR_4 = (BloomOptions *) FUNC_1(sizeof(BloomOptions));

 VAR_4->bloomLength = (VAR_1 + VAR_3 - 1) / VAR_3;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4->bitSize[VAR_5] = VAR_0;
 FUNC_0(VAR_4, sizeof(BloomOptions));
 return VAR_4;
}
