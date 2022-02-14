
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct snd_bebob {TYPE_2__* spec; } ;
struct TYPE_4__ {TYPE_1__* clock; } ;
struct TYPE_3__ {scalar_t__ types; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_bebob*,int ,size_t*) ;
 scalar_t__ VAR_4 ;
 char** VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct snd_bebob *VAR_6, unsigned int *VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 const signed char *VAR_10;

 VAR_8 = FUNC_0(VAR_6, VAR_3, &VAR_9);
 if (VAR_8 < 0)
  goto end;


 if (VAR_6->spec->clock->types == VAR_4)
  VAR_10 = VAR_5[0];
 else
  VAR_10 = VAR_5[1];


 VAR_9 &= VAR_2;
 if (VAR_9 >= VAR_1 || VAR_10[VAR_9] < 0) {
  VAR_8 = -VAR_0;
  goto end;
 }

 *VAR_7 = (unsigned int)VAR_10[VAR_9];
end:
 return VAR_8;
}
