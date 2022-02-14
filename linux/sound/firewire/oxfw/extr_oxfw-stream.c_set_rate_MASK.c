
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_oxfw {int unit; scalar_t__ has_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_oxfw *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->unit, VAR_3,
          VAR_0, 0);
 if (VAR_4 < 0)
  goto end;

 if (VAR_2->has_output)
  VAR_4 = FUNC_0(VAR_2->unit, VAR_3,
           VAR_1, 0);
end:
 return VAR_4;
}
