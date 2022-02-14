
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lx_stream {unsigned int is_capture; int status; } ;
struct lx6464es {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct lx6464es*,int ,unsigned int const) ;

__attribute__((used)) static void FUNC_3(struct lx6464es *VAR_1, struct lx_stream *VAR_2)
{
 const unsigned int VAR_3 = VAR_2->is_capture;
 int VAR_4;

 FUNC_0(VAR_1->card->dev, "stopping: stopping stream\n");
 VAR_4 = FUNC_2(VAR_1, 0, VAR_3);
 if (VAR_4 < 0)
  FUNC_1(VAR_1->card->dev, "couldn't stop stream\n");
 else
  VAR_2->status = VAR_0;

}
