
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lola_stream {int dsd; } ;
struct lola {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct lola*,int ,int ) ;
 int FUNC_1 (struct lola*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct lola *VAR_3,
       struct lola_stream *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3, VAR_4->dsd, VAR_2);
 VAR_5 &= VAR_1 | VAR_0;
 if (VAR_5)
  FUNC_1(VAR_3, VAR_4->dsd, VAR_2, VAR_5);
}
