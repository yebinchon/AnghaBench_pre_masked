
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int Window ;
struct TYPE_5__ {scalar_t__ state_maximized_vert_atom; scalar_t__ state_maximized_horz_atom; scalar_t__ state_hidden_atom; } ;
struct TYPE_6__ {TYPE_1__ ewmhints; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,char*,int,unsigned long*,unsigned char**,int ) ;

int
FUNC_2(RDPCLIENT * VAR_5, Window VAR_6)
{
 unsigned long VAR_7;
 unsigned char *VAR_8;
 uint32 *VAR_9;
 unsigned long VAR_10;
 BOOL VAR_11, VAR_12, VAR_13;

 VAR_11 = VAR_12 = VAR_13 = VAR_0;

 if (FUNC_1(VAR_5, VAR_6, "_NET_WM_STATE", 64, &VAR_7, &VAR_8, 0) < 0)
  return VAR_3;

 VAR_9 = (uint32 *) VAR_8;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
 {
  if (VAR_9[VAR_10] == VAR_5->ewmhints.state_maximized_vert_atom)
   VAR_11 = VAR_4;
  if (VAR_9[VAR_10] == VAR_5->ewmhints.state_maximized_horz_atom)
   VAR_12 = VAR_4;
  if (VAR_9[VAR_10] == VAR_5->ewmhints.state_hidden_atom)
   VAR_13 = VAR_4;
 }

 FUNC_0(VAR_8);

 if (VAR_11 && VAR_12)
  return VAR_1;
 else if (VAR_13)
  return VAR_2;
 else
  return VAR_3;
}
