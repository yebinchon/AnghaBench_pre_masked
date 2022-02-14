
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct snd_soc_component* disc_data; } ;
struct snd_soc_component {int dev; TYPE_1__* card; } ;
struct TYPE_4__ {int (* receive_buf ) (struct tty_struct*,unsigned char const*,char*,int) ;} ;
struct TYPE_3__ {int pop_time; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tty_struct*,unsigned char const*,char*,int) ;
 int FUNC_9 (struct tty_struct*,unsigned char const*,char*,int) ;
 int FUNC_10 (int *,int ,int ) ;
 TYPE_2__ VAR_9 ;

__attribute__((used)) static void FUNC_11(struct tty_struct *VAR_10,
    const unsigned char *VAR_11, char *VAR_12, int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_10->disc_data;
 const unsigned char *VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_14)
  return;

 if (!VAR_14->card->pop_time) {



  FUNC_10(&VAR_6, VAR_5, 0);

  VAR_9.receive_buf(VAR_10, VAR_11, VAR_12, VAR_13);


  VAR_17 = FUNC_5(&VAR_0,
     FUNC_0(VAR_1),
     VAR_1);
  if (VAR_17)
   FUNC_1(VAR_14->dev,
    "Failed to link hook switch to DAPM pins, "
    "will continue with hook switch unlinked.\n");

  return;
 }

 VAR_9.receive_buf(VAR_10, VAR_11, VAR_12, VAR_13);

 for (VAR_15 = &VAR_11[VAR_13 - 1]; VAR_15 >= VAR_11; VAR_15--) {
  if (*VAR_15 != '\r')
   continue;


  FUNC_6(&VAR_2);
  FUNC_3(&VAR_6, VAR_8 + FUNC_4(150));
  VAR_16 = !VAR_3 && !VAR_4;
  VAR_4 = 1;
  FUNC_7(&VAR_2);



  if (VAR_16)
   FUNC_2(VAR_7, 1);
  break;
 }
}
