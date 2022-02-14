
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_hsw_stream {int header; int notify_work; } ;
struct sst_hsw {int dev; } ;




 int FUNC_0 (int ,char*,int) ;
 struct sst_hsw_stream* FUNC_1 (struct sst_hsw*,int) ;
 int FUNC_2 (struct sst_hsw*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct sst_hsw *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3;
 struct sst_hsw_stream *VAR_4;
 int VAR_5 = 0;

 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = FUNC_3(VAR_1);

 VAR_4 = FUNC_1(VAR_0, VAR_3);
 if (VAR_4 == ((void*)0))
  return VAR_5;

 VAR_4->header = VAR_1;

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_0->dev, "error: stage msg not implemented 0x%8.8x\n",
   VAR_1);
  break;
 case 129:
  FUNC_5(&VAR_4->notify_work);
  break;
 default:

  VAR_5 = FUNC_2(VAR_0, VAR_1);
  break;
 }

 return VAR_5;
}
