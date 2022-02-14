
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct use_connection_context {int (* set_accessname ) (struct use_connection_context*,int*) ;scalar_t__ accessname; int userid; int password; int flags; int hwndOwner; } ;
struct TYPE_7__ {scalar_t__ (* getCaps ) (int ) ;scalar_t__ (* addConnection3 ) (int ,TYPE_2__*,int ,int ,int ) ;scalar_t__ (* addConnection ) (TYPE_2__*,int ,int ) ;} ;
typedef TYPE_1__ WNetProvider ;
struct TYPE_8__ {char* lpLocalName; } ;
typedef TYPE_2__ NETRESOURCEW ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (struct use_connection_context*,int*) ;

__attribute__((used)) static DWORD FUNC_4( struct use_connection_context *VAR_7, NETRESOURCEW * VAR_8, WNetProvider *VAR_9, BOOLEAN VAR_10 )
{
    DWORD VAR_11, VAR_12;

    VAR_11 = VAR_9->getCaps(VAR_1);
    if (!(VAR_11 & (VAR_2 | VAR_3)))
        return VAR_0;

    VAR_12 = VAR_4;
    do
    {
        if ((VAR_11 & VAR_3) && VAR_9->addConnection3)
            VAR_12 = VAR_9->addConnection3(VAR_7->hwndOwner, VAR_8, VAR_7->password, VAR_7->userid, VAR_7->flags);
        else if ((VAR_11 & VAR_2) && VAR_9->addConnection)
            VAR_12 = VAR_9->addConnection(VAR_8, VAR_7->password, VAR_7->userid);

        if (VAR_12 == VAR_5 && VAR_10)
            VAR_8->lpLocalName[0] -= 1;
    } while (VAR_10 && VAR_12 == VAR_5 && VAR_8->lpLocalName[0] >= 'C');

    if (VAR_12 == VAR_6 && VAR_7->accessname)
        VAR_7->set_accessname(VAR_7, VAR_8->lpLocalName);

    return VAR_12;
}
