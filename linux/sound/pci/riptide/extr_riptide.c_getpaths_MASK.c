
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmdif*,int,int,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct cmdif *VAR_1, unsigned char *VAR_2)
{
 unsigned char VAR_3[VAR_0];
 unsigned char VAR_4[VAR_0];
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_1, VAR_5, VAR_5, &VAR_3[VAR_5], &VAR_4[VAR_5]);
  if (VAR_4[VAR_5] < VAR_0) {
   VAR_2[VAR_6++] = VAR_4[VAR_5];
   VAR_2[VAR_6++] = VAR_5;
  }
 }
 return VAR_6;
}
