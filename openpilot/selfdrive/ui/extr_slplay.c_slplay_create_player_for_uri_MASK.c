
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_19__ {char const* member_0; int * uri; TYPE_7__** playInterface; TYPE_8__** player; int * member_2; int * member_1; } ;
typedef TYPE_1__ uri_player ;
struct TYPE_26__ {scalar_t__ (* Realize ) (TYPE_8__**,int ) ;scalar_t__ (* GetInterface ) (TYPE_8__**,int ,TYPE_7__***) ;} ;
struct TYPE_25__ {scalar_t__ (* SetPlayState ) (TYPE_7__**,int ) ;} ;
struct TYPE_24__ {int member_2; int * member_1; int member_0; } ;
struct TYPE_23__ {int member_1; int member_0; } ;
struct TYPE_22__ {int * member_1; int member_0; } ;
struct TYPE_21__ {int * member_1; TYPE_5__* member_0; } ;
struct TYPE_20__ {TYPE_6__* member_1; TYPE_4__* member_0; } ;
struct TYPE_18__ {scalar_t__ (* CreateAudioPlayer ) (TYPE_11__**,TYPE_8__***,TYPE_2__*,TYPE_3__*,int ,int *,int *) ;} ;
typedef scalar_t__ SLresult ;
typedef int SLchar ;
typedef TYPE_2__ SLDataSource ;
typedef TYPE_3__ SLDataSink ;
typedef TYPE_4__ SLDataLocator_URI ;
typedef TYPE_5__ SLDataLocator_OutputMix ;
typedef TYPE_6__ SLDataFormat_MIME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_11__** VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_11__**,TYPE_8__***,TYPE_2__*,TYPE_3__*,int ,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_8__**,int ) ;
 scalar_t__ FUNC_2 (TYPE_8__**,int ,TYPE_7__***) ;
 scalar_t__ FUNC_3 (TYPE_7__**,int ) ;

uri_player* FUNC_4(const char* VAR_11, char **VAR_12) {
  uri_player VAR_13 = { VAR_11, ((void*)0), ((void*)0) };

  SLresult VAR_14;
  SLDataLocator_URI VAR_15 = {&VAR_4, *(SLchar *) VAR_11};
  SLDataFormat_MIME VAR_16 = {VAR_2, ((void*)0), VAR_1};
  SLDataSource VAR_17 = {&VAR_15, &VAR_16};

  SLDataLocator_OutputMix VAR_18 = {VAR_3, VAR_9};
  SLDataSink VAR_19 = {&VAR_18, ((void*)0)};

  VAR_14 = (*VAR_8)->CreateAudioPlayer(VAR_8, &VAR_13.player, &VAR_17, &VAR_19, 0, ((void*)0), ((void*)0));
  if (VAR_14 != VAR_7) {
    *VAR_12 = "Failed to create audio player";
    return ((void*)0);
  }

  VAR_14 = (*(VAR_13.player))->Realize(VAR_13.player, VAR_0);
  if (VAR_14 != VAR_7) {
    *VAR_12 = "Failed to realize audio player";
    return ((void*)0);
  }

  VAR_14 = (*(VAR_13.player))->GetInterface(VAR_13.player, VAR_5, &(VAR_13.playInterface));
  if (VAR_14 != VAR_7) {
    *VAR_12 = "Failed to get player interface";
    return ((void*)0);
  }

  VAR_14 = (*(VAR_13.playInterface))->SetPlayState(VAR_13.playInterface, VAR_6);
  if (VAR_14 != VAR_7) {
    *VAR_12 = "Failed to initialize playstate to SL_PLAYSTATE_PAUSED";
    return ((void*)0);
  }

  uri_player *VAR_20 = VAR_10;
  while (VAR_20->uri != ((void*)0)) {
    VAR_20++;
  }
  *VAR_20 = VAR_13;

  return VAR_20;
}
