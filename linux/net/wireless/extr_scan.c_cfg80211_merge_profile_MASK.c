
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct element {size_t datalen; int * data; } ;


 struct element* FUNC_0 (int const*,size_t,struct element const*,struct element const*) ;
 int FUNC_1 (int *,int *,size_t) ;

size_t FUNC_2(const u8 *VAR_0, size_t VAR_1,
         const struct element *VAR_2,
         const struct element *VAR_3,
         u8 *VAR_4, size_t VAR_5)
{
 size_t VAR_6 = VAR_3->datalen;
 const struct element *VAR_7;

 if (VAR_3->datalen > VAR_5)
  return 0;

 FUNC_1(VAR_4, VAR_3->data, VAR_3->datalen);

 while ((VAR_7 = FUNC_0(VAR_0, VAR_1,
        VAR_2,
        VAR_3))) {
  const struct element *VAR_8 = (void *)&VAR_7->data[1];

  if (VAR_6 + VAR_8->datalen > VAR_5)
   break;
  FUNC_1(VAR_4 + VAR_6, VAR_8->data,
         VAR_8->datalen);
  VAR_6 += VAR_8->datalen;
 }

 return VAR_6;
}
