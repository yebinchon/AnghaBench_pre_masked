
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(int VAR_0) {
    switch(VAR_0) {
        case 130:
            return "OK";

        case 132:
            return "Moved Permanently";

        case 128:
            return "Temporary Redirect";

        case 134:
            return "Bad Request";

        case 133:
            return "Forbidden";

        case 131:
            return "Not Found";

        case 129:
            return "Preconditions Failed";

        default:
            if(VAR_0 >= 100 && VAR_0 < 200)
                return "Informational";

            if(VAR_0 >= 200 && VAR_0 < 300)
                return "Successful";

            if(VAR_0 >= 300 && VAR_0 < 400)
                return "Redirection";

            if(VAR_0 >= 400 && VAR_0 < 500)
                return "Bad Request";

            if(VAR_0 >= 500 && VAR_0 < 600)
                return "Server Error";

            return "Undefined Error";
    }
}
