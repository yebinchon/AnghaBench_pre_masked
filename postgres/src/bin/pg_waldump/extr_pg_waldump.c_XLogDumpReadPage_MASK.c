
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_5__ {int ws_dir; } ;
struct TYPE_6__ {TYPE_1__ segcxt; TYPE_3__* private_data; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_7__ {scalar_t__ endptr; int endptr_reached; int timeline; } ;
typedef TYPE_3__ XLogDumpPrivate ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_1(XLogReaderState *VAR_2, XLogRecPtr VAR_3, int VAR_4,
     XLogRecPtr VAR_5, char *VAR_6)
{
 XLogDumpPrivate *VAR_7 = VAR_2->private_data;
 int VAR_8 = VAR_1;

 if (VAR_7->endptr != VAR_0)
 {
  if (VAR_3 + VAR_1 <= VAR_7->endptr)
   VAR_8 = VAR_1;
  else if (VAR_3 + VAR_4 <= VAR_7->endptr)
   VAR_8 = VAR_7->endptr - VAR_3;
  else
  {
   VAR_7->endptr_reached = 1;
   return -1;
  }
 }

 FUNC_0(VAR_2->segcxt.ws_dir, VAR_7->timeline, VAR_3,
      VAR_6, VAR_8);

 return VAR_8;
}
