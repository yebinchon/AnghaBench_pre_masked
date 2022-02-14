
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lola {TYPE_1__* pcm; } ;
struct TYPE_2__ {int num_streams; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct lola*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct lola *VAR_10)
{
 unsigned int VAR_11;


 VAR_11 = (1 << VAR_10->pcm[VAR_9].num_streams) - 1;
 FUNC_0(VAR_10, VAR_0, VAR_4, VAR_11);
 VAR_11 = (1 << VAR_10->pcm[VAR_1].num_streams) - 1;
 FUNC_0(VAR_10, VAR_0, VAR_2, VAR_11);


 VAR_11 = VAR_7 | VAR_5 | VAR_6 |
  VAR_8;
 FUNC_0(VAR_10, VAR_0, VAR_3, VAR_11);
}
