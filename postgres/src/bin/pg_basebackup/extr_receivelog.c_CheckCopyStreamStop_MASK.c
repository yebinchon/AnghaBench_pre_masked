
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_4__ {int timeline; scalar_t__ (* stream_stop ) (int ,int ,int) ;} ;
typedef TYPE_1__ StreamCtl ;
typedef int PGconn ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_6(PGconn *VAR_1, StreamCtl *VAR_2, XLogRecPtr VAR_3,
     XLogRecPtr *VAR_4)
{
 if (VAR_0 && VAR_2->stream_stop(VAR_3, VAR_2->timeline, 0))
 {
  if (!FUNC_3(VAR_2, VAR_3))
  {

   return 0;
  }
  if (FUNC_2(VAR_1, ((void*)0)) <= 0 || FUNC_1(VAR_1))
  {
   FUNC_4("could not send copy-end packet: %s",
       FUNC_0(VAR_1));
   return 0;
  }
  VAR_0 = 0;
 }

 return 1;
}
