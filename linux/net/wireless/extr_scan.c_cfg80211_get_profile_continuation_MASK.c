
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u8 ;
struct element {scalar_t__ const* data; int datalen; scalar_t__ id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct element* FUNC_0 (int ,scalar_t__ const*,size_t) ;

__attribute__((used)) static const struct element
*FUNC_1(const u8 *VAR_2, size_t VAR_3,
       const struct element *VAR_4,
       const struct element *VAR_5)
{
 const u8 *VAR_6 = VAR_4->data + VAR_4->datalen;
 const struct element *VAR_7;
 const struct element *VAR_8;

 VAR_7 = FUNC_0(VAR_0,
      VAR_6,
      VAR_3 - (VAR_6 - VAR_2));





 if ((VAR_5->data + VAR_5->datalen < VAR_6 - 1) ||
     !VAR_7)
  return ((void*)0);



 if (VAR_7->datalen < 4)
  return ((void*)0);

 VAR_8 = (void *)&VAR_7->data[1];

 if (VAR_7->data + VAR_7->datalen <
     VAR_8->data + VAR_8->datalen)
  return ((void*)0);

 if (VAR_8->id != 0 || VAR_8->datalen < 2)
  return ((void*)0);





 return VAR_8->data[0] == VAR_1 ?
        ((void*)0) : VAR_7;
}
