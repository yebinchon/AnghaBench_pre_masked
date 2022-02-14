
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client_info {scalar_t__ client; } ;
struct snd_seq_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_seq_client*,struct snd_seq_client_info*) ;
 int FUNC_1 (struct snd_seq_client*) ;
 struct snd_seq_client* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_seq_client *VAR_3,
        void *VAR_4)
{
 struct snd_seq_client_info *VAR_5 = VAR_4;
 struct snd_seq_client *VAR_6 = ((void*)0);


 if (VAR_5->client < VAR_1)
  VAR_5->client++;
 if (VAR_5->client < 0)
  VAR_5->client = 0;
 for (; VAR_5->client < VAR_2; VAR_5->client++) {
  VAR_6 = FUNC_2(VAR_5->client);
  if (VAR_6)
   break;
 }
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_0(VAR_6, VAR_5);
 FUNC_1(VAR_6);

 return 0;
}
