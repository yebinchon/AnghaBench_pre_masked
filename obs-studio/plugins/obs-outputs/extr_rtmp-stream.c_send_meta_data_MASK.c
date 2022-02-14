
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtmp_stream {int rtmp; int output; } ;


 scalar_t__ FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int **,size_t*,int,size_t) ;

__attribute__((used)) static bool FUNC_3(struct rtmp_stream *VAR_0, size_t VAR_1, bool *VAR_2)
{
 uint8_t *VAR_3;
 size_t VAR_4;
 bool VAR_5 = 1;

 *VAR_2 = FUNC_2(VAR_0->output, &VAR_3, &VAR_4,
         0, VAR_1);

 if (*VAR_2) {
  VAR_5 = FUNC_0(&VAR_0->rtmp, (char *)VAR_3,
         (int)VAR_4, (int)VAR_1) >= 0;
  FUNC_1(VAR_3);
 }

 return VAR_5;
}
