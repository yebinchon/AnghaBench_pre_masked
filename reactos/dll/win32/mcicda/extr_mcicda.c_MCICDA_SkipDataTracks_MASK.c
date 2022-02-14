
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINE_MCICDAUDIO ;
struct TYPE_6__ {int FirstTrack; int LastTrack; TYPE_1__* TrackData; } ;
struct TYPE_5__ {int Control; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_2__ CDROM_TOC ;


 scalar_t__ FUNC_0 (TYPE_2__,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static DWORD FUNC_3(WINE_MCICDAUDIO* VAR_1,DWORD *VAR_2)
{
  int VAR_3;
  DWORD VAR_4;
  CDROM_TOC VAR_5;
  if (!FUNC_2(VAR_1, &VAR_5, &VAR_4))
    return FUNC_1(VAR_1);

  if (*VAR_2 < FUNC_0(VAR_5,VAR_5.FirstTrack) ||
      *VAR_2 >= FUNC_0(VAR_5,VAR_5.LastTrack+1))
    return VAR_0;
  for(VAR_3=VAR_5.LastTrack+1;VAR_3>VAR_5.FirstTrack;VAR_3--)
    if ( FUNC_0(VAR_5, VAR_3) <= *VAR_2 ) break;


  for(;VAR_3<=VAR_5.LastTrack;VAR_3++)
    if ( ! (VAR_5.TrackData[VAR_3-VAR_5.FirstTrack].Control & 4) )
      break;


  if ( FUNC_0(VAR_5, VAR_3) > *VAR_2 )
    *VAR_2 = FUNC_0(VAR_5, VAR_3);

  if (*VAR_2 == FUNC_0(VAR_5,VAR_5.LastTrack+1))
     (*VAR_2)--;
  return 0;
}
