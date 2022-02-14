
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int unit; } ;
struct fw_device {int generation; int node_id; struct fw_card* card; } ;
struct fw_card {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct snd_efw*,void*,size_t,int*) ;
 struct fw_device* FUNC_1 (int ) ;
 struct snd_efw** VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct fw_card *VAR_3, int VAR_4, int VAR_5,
       void *VAR_6, size_t VAR_7, int *VAR_8)
{
 struct fw_device *VAR_9;
 struct snd_efw *VAR_10;
 unsigned int VAR_11;

 FUNC_3(&VAR_2);

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_10 = VAR_1[VAR_11];
  if (VAR_10 == ((void*)0))
   continue;
  VAR_9 = FUNC_1(VAR_10->unit);
  if ((VAR_9->card != VAR_3) ||
      (VAR_9->generation != VAR_4))
   continue;
  FUNC_2();
  if (VAR_9->node_id != VAR_5)
   continue;

  break;
 }
 if (VAR_11 == VAR_0)
  goto end;

 FUNC_0(VAR_10, VAR_6, VAR_7, VAR_8);
end:
 FUNC_4(&VAR_2);
}
