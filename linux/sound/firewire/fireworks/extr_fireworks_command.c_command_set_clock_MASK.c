
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int dummy; } ;
struct efc_clock {unsigned int source; unsigned int sampling_rate; unsigned int index; int member_0; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct snd_efw*,struct efc_clock*) ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 (struct snd_efw*,int ,int ,int *,int,int *,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct snd_efw *VAR_4,
    unsigned int VAR_5, unsigned int VAR_6)
{
 struct efc_clock VAR_7 = {0};
 int VAR_8;


 if ((VAR_5 == VAR_3) && (VAR_6 == VAR_3)) {
  VAR_8 = -VAR_2;
  goto end;
 }


 VAR_8 = FUNC_0(VAR_4, &VAR_7);
 if (VAR_8 < 0)
  goto end;


 if ((VAR_7.source == VAR_5) && (VAR_7.sampling_rate == VAR_6))
  goto end;


 if ((VAR_5 != VAR_3) && (VAR_7.source != VAR_5))
  VAR_7.source = VAR_5;
 if ((VAR_6 != VAR_3) && (VAR_7.sampling_rate != VAR_6))
  VAR_7.sampling_rate = VAR_6;
 VAR_7.index = 0;

 FUNC_1(&VAR_7.source);
 FUNC_1(&VAR_7.sampling_rate);
 FUNC_1(&VAR_7.index);

 VAR_8 = FUNC_2(VAR_4, VAR_0,
         VAR_1,
         (__be32 *)&VAR_7, sizeof(struct efc_clock),
         ((void*)0), 0);
 if (VAR_8 < 0)
  goto end;






 FUNC_3(150);
end:
 return VAR_8;
}
