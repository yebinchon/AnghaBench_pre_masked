
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aaci_runtime {scalar_t__ base; scalar_t__ fifo; } ;
struct aaci {int maincr; scalar_t__ base; struct aaci_runtime playback; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct aaci *VAR_8)
{
 struct aaci_runtime *VAR_9 = &VAR_8->playback;
 int VAR_10;





 FUNC_2(VAR_4 | VAR_5 | VAR_3, VAR_9->base + VAR_2);

 for (VAR_10 = 0; !(FUNC_0(VAR_9->base + VAR_1) & VAR_7) && VAR_10 < 4096; VAR_10++)
  FUNC_2(0, VAR_9->fifo);

 FUNC_2(0, VAR_9->base + VAR_2);






 FUNC_2(VAR_8->maincr & ~VAR_6, VAR_8->base + VAR_0);
 FUNC_0(VAR_8->base + VAR_0);
 FUNC_1(1);
 FUNC_2(VAR_8->maincr, VAR_8->base + VAR_0);





 if (VAR_10 == 4096)
  VAR_10 = 8;

 return VAR_10;
}
