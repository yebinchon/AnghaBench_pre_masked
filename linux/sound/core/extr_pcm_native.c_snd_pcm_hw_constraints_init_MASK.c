
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_hw_constraints {int dummy; } ;
struct snd_pcm_runtime {struct snd_pcm_hw_constraints hw_constraints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct snd_pcm_hw_constraints*,int) ;
 int FUNC_1 (struct snd_pcm_hw_constraints*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int,int ,void*,int,int,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

int FUNC_6(struct snd_pcm_substream *VAR_22)
{
 struct snd_pcm_runtime *VAR_23 = VAR_22->runtime;
 struct snd_pcm_hw_constraints *VAR_24 = &VAR_23->hw_constraints;
 int VAR_25, VAR_26;

 for (VAR_25 = VAR_5; VAR_25 <= VAR_9; VAR_25++) {
  FUNC_4(FUNC_1(VAR_24, VAR_25));
 }

 for (VAR_25 = VAR_4; VAR_25 <= VAR_8; VAR_25++) {
  FUNC_2(FUNC_0(VAR_24, VAR_25));
 }

 FUNC_3(FUNC_0(VAR_24, VAR_3));
 FUNC_3(FUNC_0(VAR_24, VAR_1));
 FUNC_3(FUNC_0(VAR_24, VAR_0));
 FUNC_3(FUNC_0(VAR_24, VAR_15));
 FUNC_3(FUNC_0(VAR_24, VAR_7));

 VAR_26 = FUNC_5(VAR_23, 0, VAR_6,
       VAR_17, ((void*)0),
       VAR_15, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_15,
      VAR_21, ((void*)0),
      VAR_6,
      VAR_15, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_15,
      VAR_16, ((void*)0),
      VAR_7, VAR_3, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_7,
      VAR_18, ((void*)0),
      VAR_15, VAR_3, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_7,
      VAR_20, (void*) 8,
      VAR_11, VAR_12, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_7,
      VAR_20, (void*) 8,
      VAR_0, VAR_1, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_3,
      VAR_16, ((void*)0),
      VAR_7, VAR_15, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_14,
      VAR_20, (void*) 1000000,
      VAR_12, VAR_13, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_14,
      VAR_20, (void*) 1000000,
      VAR_1, VAR_2, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_10,
      VAR_16, ((void*)0),
      VAR_1, VAR_12, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_12,
      VAR_16, ((void*)0),
      VAR_1, VAR_10, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_12,
      VAR_20, (void*) 8,
      VAR_11, VAR_7, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_12,
      VAR_19, (void*) 1000000,
      VAR_13, VAR_14, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_1,
      VAR_18, ((void*)0),
      VAR_12, VAR_10, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_1,
      VAR_20, (void*) 8,
      VAR_0, VAR_7, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_1,
      VAR_19, (void*) 1000000,
      VAR_2, VAR_14, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_11,
      VAR_19, (void*) 8,
      VAR_12, VAR_7, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_0,
      VAR_19, (void*) 8,
      VAR_1, VAR_7, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_13,
      VAR_20, (void*) 1000000,
      VAR_12, VAR_14, -1);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_5(VAR_23, 0, VAR_2,
      VAR_20, (void*) 1000000,
      VAR_1, VAR_14, -1);
 if (VAR_26 < 0)
  return VAR_26;
 return 0;
}
