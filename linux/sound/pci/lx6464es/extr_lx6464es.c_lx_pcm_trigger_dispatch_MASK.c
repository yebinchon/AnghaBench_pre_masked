
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lx_stream {int status; } ;
struct lx6464es {int lock; int playback_stream; int capture_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct lx6464es*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct lx6464es *VAR_3,
       struct lx_stream *VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 FUNC_1(&VAR_3->lock);
 switch (VAR_5) {
 case 129:
  VAR_4->status = VAR_1;
  break;

 case 128:
  VAR_4->status = VAR_2;
  break;

 default:
  VAR_6 = -VAR_0;
  goto exit;
 }

 FUNC_0(VAR_3, &VAR_3->capture_stream);
 FUNC_0(VAR_3, &VAR_3->playback_stream);

exit:
 FUNC_2(&VAR_3->lock);
 return VAR_6;
}
